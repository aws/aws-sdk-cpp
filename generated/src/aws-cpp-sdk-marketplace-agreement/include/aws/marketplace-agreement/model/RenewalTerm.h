/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/RenewalTermConfiguration.h>
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
   * <p>Defines that on graceful expiration of the agreement (when the agreement ends
   * on its pre-defined end date), a new agreement will be created using the accepted
   * terms on the existing agreement. In other words, the agreement will be renewed.
   * The presence of <code>RenewalTerm</code> in the offer document means that
   * auto-renewal is allowed. Buyers will have the option to accept or decline
   * auto-renewal at the offer acceptance/agreement creation. Buyers can also change
   * this flag from <code>True</code> to <code>False</code> or <code>False</code> to
   * <code>True</code> at anytime during the agreement's lifecycle.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RenewalTerm">AWS
   * API Reference</a></p>
   */
  class RenewalTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API RenewalTerm();
    AWS_AGREEMENTSERVICE_API RenewalTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API RenewalTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline const RenewalTermConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline void SetConfiguration(const RenewalTermConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline void SetConfiguration(RenewalTermConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline RenewalTerm& WithConfiguration(const RenewalTermConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Additional parameters specified by the acceptor while accepting the term.</p>
     */
    inline RenewalTerm& WithConfiguration(RenewalTermConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>Category of the term being updated. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Category of the term being updated. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Category of the term being updated. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Category of the term being updated. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Category of the term being updated. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Category of the term being updated. </p>
     */
    inline RenewalTerm& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Category of the term being updated. </p>
     */
    inline RenewalTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Category of the term being updated. </p>
     */
    inline RenewalTerm& WithType(const char* value) { SetType(value); return *this;}

  private:

    RenewalTermConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
