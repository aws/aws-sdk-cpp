/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class EnableImportFindingsForProductResult
  {
  public:
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult();
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API EnableImportFindingsForProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline const Aws::String& GetProductSubscriptionArn() const{ return m_productSubscriptionArn; }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(const Aws::String& value) { m_productSubscriptionArn = value; }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(Aws::String&& value) { m_productSubscriptionArn = std::move(value); }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline void SetProductSubscriptionArn(const char* value) { m_productSubscriptionArn.assign(value); }

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(const Aws::String& value) { SetProductSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(Aws::String&& value) { SetProductSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of your subscription to the product to enable integrations for.</p>
     */
    inline EnableImportFindingsForProductResult& WithProductSubscriptionArn(const char* value) { SetProductSubscriptionArn(value); return *this;}

  private:

    Aws::String m_productSubscriptionArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
