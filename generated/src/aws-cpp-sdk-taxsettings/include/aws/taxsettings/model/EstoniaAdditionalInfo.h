﻿/**
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
   * <p> Additional tax information associated with your TRN in
   * Estonia.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/EstoniaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class EstoniaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API EstoniaAdditionalInfo();
    AWS_TAXSETTINGS_API EstoniaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API EstoniaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Registry commercial code (RCC) for your TRN in Estonia. This value is an
     * eight-numeric string, such as <code>12345678</code>.</p>
     */
    inline const Aws::String& GetRegistryCommercialCode() const{ return m_registryCommercialCode; }
    inline bool RegistryCommercialCodeHasBeenSet() const { return m_registryCommercialCodeHasBeenSet; }
    inline void SetRegistryCommercialCode(const Aws::String& value) { m_registryCommercialCodeHasBeenSet = true; m_registryCommercialCode = value; }
    inline void SetRegistryCommercialCode(Aws::String&& value) { m_registryCommercialCodeHasBeenSet = true; m_registryCommercialCode = std::move(value); }
    inline void SetRegistryCommercialCode(const char* value) { m_registryCommercialCodeHasBeenSet = true; m_registryCommercialCode.assign(value); }
    inline EstoniaAdditionalInfo& WithRegistryCommercialCode(const Aws::String& value) { SetRegistryCommercialCode(value); return *this;}
    inline EstoniaAdditionalInfo& WithRegistryCommercialCode(Aws::String&& value) { SetRegistryCommercialCode(std::move(value)); return *this;}
    inline EstoniaAdditionalInfo& WithRegistryCommercialCode(const char* value) { SetRegistryCommercialCode(value); return *this;}
    ///@}
  private:

    Aws::String m_registryCommercialCode;
    bool m_registryCommercialCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
