/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/UkraineTrnType.h>
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
   * <p> Additional tax information associated with your TRN in Ukraine.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/UkraineAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class UkraineAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API UkraineAdditionalInfo() = default;
    AWS_TAXSETTINGS_API UkraineAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API UkraineAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tax registration type. </p>
     */
    inline UkraineTrnType GetUkraineTrnType() const { return m_ukraineTrnType; }
    inline bool UkraineTrnTypeHasBeenSet() const { return m_ukraineTrnTypeHasBeenSet; }
    inline void SetUkraineTrnType(UkraineTrnType value) { m_ukraineTrnTypeHasBeenSet = true; m_ukraineTrnType = value; }
    inline UkraineAdditionalInfo& WithUkraineTrnType(UkraineTrnType value) { SetUkraineTrnType(value); return *this;}
    ///@}
  private:

    UkraineTrnType m_ukraineTrnType{UkraineTrnType::NOT_SET};
    bool m_ukraineTrnTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
