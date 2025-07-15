/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/model/FeatureEnableParameter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace repostspace
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/SupportedEmailDomainsParameters">AWS
   * API Reference</a></p>
   */
  class SupportedEmailDomainsParameters
  {
  public:
    AWS_REPOSTSPACE_API SupportedEmailDomainsParameters() = default;
    AWS_REPOSTSPACE_API SupportedEmailDomainsParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API SupportedEmailDomainsParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline FeatureEnableParameter GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(FeatureEnableParameter value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SupportedEmailDomainsParameters& WithEnabled(FeatureEnableParameter value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedDomains() const { return m_allowedDomains; }
    inline bool AllowedDomainsHasBeenSet() const { return m_allowedDomainsHasBeenSet; }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    void SetAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains = std::forward<AllowedDomainsT>(value); }
    template<typename AllowedDomainsT = Aws::Vector<Aws::String>>
    SupportedEmailDomainsParameters& WithAllowedDomains(AllowedDomainsT&& value) { SetAllowedDomains(std::forward<AllowedDomainsT>(value)); return *this;}
    template<typename AllowedDomainsT = Aws::String>
    SupportedEmailDomainsParameters& AddAllowedDomains(AllowedDomainsT&& value) { m_allowedDomainsHasBeenSet = true; m_allowedDomains.emplace_back(std::forward<AllowedDomainsT>(value)); return *this; }
    ///@}
  private:

    FeatureEnableParameter m_enabled{FeatureEnableParameter::NOT_SET};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedDomains;
    bool m_allowedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
