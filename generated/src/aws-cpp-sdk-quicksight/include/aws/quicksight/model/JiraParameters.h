/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters for Jira.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JiraParameters">AWS
   * API Reference</a></p>
   */
  class JiraParameters
  {
  public:
    AWS_QUICKSIGHT_API JiraParameters() = default;
    AWS_QUICKSIGHT_API JiraParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API JiraParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base URL of the Jira site.</p>
     */
    inline const Aws::String& GetSiteBaseUrl() const { return m_siteBaseUrl; }
    inline bool SiteBaseUrlHasBeenSet() const { return m_siteBaseUrlHasBeenSet; }
    template<typename SiteBaseUrlT = Aws::String>
    void SetSiteBaseUrl(SiteBaseUrlT&& value) { m_siteBaseUrlHasBeenSet = true; m_siteBaseUrl = std::forward<SiteBaseUrlT>(value); }
    template<typename SiteBaseUrlT = Aws::String>
    JiraParameters& WithSiteBaseUrl(SiteBaseUrlT&& value) { SetSiteBaseUrl(std::forward<SiteBaseUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_siteBaseUrl;
    bool m_siteBaseUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
