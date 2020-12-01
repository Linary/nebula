/* Copyright (c) 2020 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef EXECUTOR_MUTATE_INSERTVERTICESEXECUTOR_H_
#define EXECUTOR_MUTATE_INSERTVERTICESEXECUTOR_H_

#include "executor/QueryStorageExecutor.h"

namespace nebula {
namespace graph {

class InsertVerticesExecutor final : public QueryStorageExecutor {
public:
    InsertVerticesExecutor(const PlanNode *node, QueryContext *qctx)
        : QueryStorageExecutor("InsertVerticesExecutor", node, qctx) {}

    folly::Future<Status> execute() override;

private:
    folly::Future<Status> insertVertices();
};

class InsertEdgesExecutor final : public QueryStorageExecutor {
public:
    InsertEdgesExecutor(const PlanNode *node, QueryContext *qctx)
        : QueryStorageExecutor("InsertEdgesExecutor", node, qctx) {}

    folly::Future<Status> execute() override;

private:
    folly::Future<Status> insertEdges();
};
}   // namespace graph
}   // namespace nebula

#endif   // EXECUTOR_MUTATE_INSERTVERTICESEXECUTOR_H_