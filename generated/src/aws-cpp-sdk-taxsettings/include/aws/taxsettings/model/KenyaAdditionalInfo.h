﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/PersonType.h>
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
   * <p>Additional tax information associated with your TRN in Kenya.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/KenyaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class KenyaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API KenyaAdditionalInfo();
    AWS_TAXSETTINGS_API KenyaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API KenyaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The legal person or physical person assigned to this TRN in Kenya.</p>
     */
    inline const PersonType& GetPersonType() const{ return m_personType; }
    inline bool PersonTypeHasBeenSet() const { return m_personTypeHasBeenSet; }
    inline void SetPersonType(const PersonType& value) { m_personTypeHasBeenSet = true; m_personType = value; }
    inline void SetPersonType(PersonType&& value) { m_personTypeHasBeenSet = true; m_personType = std::move(value); }
    inline KenyaAdditionalInfo& WithPersonType(const PersonType& value) { SetPersonType(value); return *this;}
    inline KenyaAdditionalInfo& WithPersonType(PersonType&& value) { SetPersonType(std::move(value)); return *this;}
    ///@}
  private:

    PersonType m_personType;
    bool m_personTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
