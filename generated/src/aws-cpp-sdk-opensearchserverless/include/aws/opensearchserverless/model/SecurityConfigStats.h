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
   * <p>Statistics for an OpenSearch Serverless security configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/SecurityConfigStats">AWS
   * API Reference</a></p>
   */
  class SecurityConfigStats
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigStats();
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API SecurityConfigStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of security configurations in the current account.</p>
     */
    inline long long GetSamlConfigCount() const{ return m_samlConfigCount; }

    /**
     * <p>The number of security configurations in the current account.</p>
     */
    inline bool SamlConfigCountHasBeenSet() const { return m_samlConfigCountHasBeenSet; }

    /**
     * <p>The number of security configurations in the current account.</p>
     */
    inline void SetSamlConfigCount(long long value) { m_samlConfigCountHasBeenSet = true; m_samlConfigCount = value; }

    /**
     * <p>The number of security configurations in the current account.</p>
     */
    inline SecurityConfigStats& WithSamlConfigCount(long long value) { SetSamlConfigCount(value); return *this;}

  private:

    long long m_samlConfigCount;
    bool m_samlConfigCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
