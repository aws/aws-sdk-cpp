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
   * <p>Statistics for an OpenSearch Serverless access policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/AccessPolicyStats">AWS
   * API Reference</a></p>
   */
  class AccessPolicyStats
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyStats();
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of data access policies in the current account.</p>
     */
    inline long long GetDataPolicyCount() const{ return m_dataPolicyCount; }

    /**
     * <p>The number of data access policies in the current account.</p>
     */
    inline bool DataPolicyCountHasBeenSet() const { return m_dataPolicyCountHasBeenSet; }

    /**
     * <p>The number of data access policies in the current account.</p>
     */
    inline void SetDataPolicyCount(long long value) { m_dataPolicyCountHasBeenSet = true; m_dataPolicyCount = value; }

    /**
     * <p>The number of data access policies in the current account.</p>
     */
    inline AccessPolicyStats& WithDataPolicyCount(long long value) { SetDataPolicyCount(value); return *this;}

  private:

    long long m_dataPolicyCount;
    bool m_dataPolicyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
