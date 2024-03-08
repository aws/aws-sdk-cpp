/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Enables you and your customers to move your existing agreements to AWS
   * Marketplace. The customer won't be charged for product usage in AWS Marketplace
   * because they already paid for the product outside of AWS
   * Marketplace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ByolPricingTerm">AWS
   * API Reference</a></p>
   */
  class ByolPricingTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API ByolPricingTerm();
    AWS_AGREEMENTSERVICE_API ByolPricingTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ByolPricingTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type of the term being updated.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Type of the term being updated.</p>
     */
    inline ByolPricingTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Type of the term being updated.</p>
     */
    inline ByolPricingTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Type of the term being updated.</p>
     */
    inline ByolPricingTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
