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
   * <p>Statistics for an OpenSearch Serverless security policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityPolicyStats">AWS
   * API Reference</a></p>
   */
  class SecurityPolicyStats
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicyStats();
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicyStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityPolicyStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of encryption policies in the current account.</p>
     */
    inline long long GetEncryptionPolicyCount() const{ return m_encryptionPolicyCount; }

    /**
     * <p>The number of encryption policies in the current account.</p>
     */
    inline bool EncryptionPolicyCountHasBeenSet() const { return m_encryptionPolicyCountHasBeenSet; }

    /**
     * <p>The number of encryption policies in the current account.</p>
     */
    inline void SetEncryptionPolicyCount(long long value) { m_encryptionPolicyCountHasBeenSet = true; m_encryptionPolicyCount = value; }

    /**
     * <p>The number of encryption policies in the current account.</p>
     */
    inline SecurityPolicyStats& WithEncryptionPolicyCount(long long value) { SetEncryptionPolicyCount(value); return *this;}


    /**
     * <p>The number of network policies in the current account.</p>
     */
    inline long long GetNetworkPolicyCount() const{ return m_networkPolicyCount; }

    /**
     * <p>The number of network policies in the current account.</p>
     */
    inline bool NetworkPolicyCountHasBeenSet() const { return m_networkPolicyCountHasBeenSet; }

    /**
     * <p>The number of network policies in the current account.</p>
     */
    inline void SetNetworkPolicyCount(long long value) { m_networkPolicyCountHasBeenSet = true; m_networkPolicyCount = value; }

    /**
     * <p>The number of network policies in the current account.</p>
     */
    inline SecurityPolicyStats& WithNetworkPolicyCount(long long value) { SetNetworkPolicyCount(value); return *this;}

  private:

    long long m_encryptionPolicyCount;
    bool m_encryptionPolicyCountHasBeenSet = false;

    long long m_networkPolicyCount;
    bool m_networkPolicyCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
