/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Statistics for an OpenSearch Serverless lifecycle policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/LifecyclePolicyStats">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyStats
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyStats();
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of retention lifecycle policies in the current account.</p>
     */
    inline long long GetRetentionPolicyCount() const{ return m_retentionPolicyCount; }

    /**
     * <p>The number of retention lifecycle policies in the current account.</p>
     */
    inline bool RetentionPolicyCountHasBeenSet() const { return m_retentionPolicyCountHasBeenSet; }

    /**
     * <p>The number of retention lifecycle policies in the current account.</p>
     */
    inline void SetRetentionPolicyCount(long long value) { m_retentionPolicyCountHasBeenSet = true; m_retentionPolicyCount = value; }

    /**
     * <p>The number of retention lifecycle policies in the current account.</p>
     */
    inline LifecyclePolicyStats& WithRetentionPolicyCount(long long value) { SetRetentionPolicyCount(value); return *this;}

  private:

    long long m_retentionPolicyCount;
    bool m_retentionPolicyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
