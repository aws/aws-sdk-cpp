/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Additional tax information to specify for a TRN in Greece. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/GreeceAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class GreeceAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API GreeceAdditionalInfo();
    AWS_TAXSETTINGS_API GreeceAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API GreeceAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The code of contracting authority for e-invoicing.</p>
     */
    inline const Aws::String& GetContractingAuthorityCode() const{ return m_contractingAuthorityCode; }
    inline bool ContractingAuthorityCodeHasBeenSet() const { return m_contractingAuthorityCodeHasBeenSet; }
    inline void SetContractingAuthorityCode(const Aws::String& value) { m_contractingAuthorityCodeHasBeenSet = true; m_contractingAuthorityCode = value; }
    inline void SetContractingAuthorityCode(Aws::String&& value) { m_contractingAuthorityCodeHasBeenSet = true; m_contractingAuthorityCode = std::move(value); }
    inline void SetContractingAuthorityCode(const char* value) { m_contractingAuthorityCodeHasBeenSet = true; m_contractingAuthorityCode.assign(value); }
    inline GreeceAdditionalInfo& WithContractingAuthorityCode(const Aws::String& value) { SetContractingAuthorityCode(value); return *this;}
    inline GreeceAdditionalInfo& WithContractingAuthorityCode(Aws::String&& value) { SetContractingAuthorityCode(std::move(value)); return *this;}
    inline GreeceAdditionalInfo& WithContractingAuthorityCode(const char* value) { SetContractingAuthorityCode(value); return *this;}
    ///@}
  private:

    Aws::String m_contractingAuthorityCode;
    bool m_contractingAuthorityCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
