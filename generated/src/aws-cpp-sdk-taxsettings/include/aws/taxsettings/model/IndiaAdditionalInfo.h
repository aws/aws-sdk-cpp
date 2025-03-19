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
   * <p> Additional tax information in India. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/IndiaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class IndiaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API IndiaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API IndiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API IndiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> India pan information associated with the account. </p>
     */
    inline const Aws::String& GetPan() const { return m_pan; }
    inline bool PanHasBeenSet() const { return m_panHasBeenSet; }
    template<typename PanT = Aws::String>
    void SetPan(PanT&& value) { m_panHasBeenSet = true; m_pan = std::forward<PanT>(value); }
    template<typename PanT = Aws::String>
    IndiaAdditionalInfo& WithPan(PanT&& value) { SetPan(std::forward<PanT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pan;
    bool m_panHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
