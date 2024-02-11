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
   * <p>Defines the customer support available for the acceptors when they purchase
   * the software.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/SupportTerm">AWS
   * API Reference</a></p>
   */
  class SupportTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API SupportTerm();
    AWS_AGREEMENTSERVICE_API SupportTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API SupportTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline const Aws::String& GetRefundPolicy() const{ return m_refundPolicy; }

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline bool RefundPolicyHasBeenSet() const { return m_refundPolicyHasBeenSet; }

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline void SetRefundPolicy(const Aws::String& value) { m_refundPolicyHasBeenSet = true; m_refundPolicy = value; }

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline void SetRefundPolicy(Aws::String&& value) { m_refundPolicyHasBeenSet = true; m_refundPolicy = std::move(value); }

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline void SetRefundPolicy(const char* value) { m_refundPolicyHasBeenSet = true; m_refundPolicy.assign(value); }

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline SupportTerm& WithRefundPolicy(const Aws::String& value) { SetRefundPolicy(value); return *this;}

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline SupportTerm& WithRefundPolicy(Aws::String&& value) { SetRefundPolicy(std::move(value)); return *this;}

    /**
     * <p>Free-text field about the refund policy description that will be shown to
     * customers as is on the website and console.</p>
     */
    inline SupportTerm& WithRefundPolicy(const char* value) { SetRefundPolicy(value); return *this;}


    /**
     * <p>Category of the term being updated.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of the term being updated.</p>
     */
    inline SupportTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of the term being updated.</p>
     */
    inline SupportTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of the term being updated.</p>
     */
    inline SupportTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_refundPolicy;
    bool m_refundPolicyHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
