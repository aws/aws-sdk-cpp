/**
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
   * <p> Additional tax information associated with your TRN in Georgia.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/GeorgiaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class GeorgiaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API GeorgiaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API GeorgiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API GeorgiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The legal person or physical person assigned to this TRN in Georgia. </p>
     */
    inline PersonType GetPersonType() const { return m_personType; }
    inline bool PersonTypeHasBeenSet() const { return m_personTypeHasBeenSet; }
    inline void SetPersonType(PersonType value) { m_personTypeHasBeenSet = true; m_personType = value; }
    inline GeorgiaAdditionalInfo& WithPersonType(PersonType value) { SetPersonType(value); return *this;}
    ///@}
  private:

    PersonType m_personType{PersonType::NOT_SET};
    bool m_personTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
