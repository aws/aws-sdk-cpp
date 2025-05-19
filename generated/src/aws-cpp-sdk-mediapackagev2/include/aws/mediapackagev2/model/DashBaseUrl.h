/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The base URLs to use for retrieving segments. You can specify multiple
   * locations and indicate the priority and weight for when each should be used, for
   * use in mutli-CDN workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashBaseUrl">AWS
   * API Reference</a></p>
   */
  class DashBaseUrl
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashBaseUrl() = default;
    AWS_MEDIAPACKAGEV2_API DashBaseUrl(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashBaseUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A source location for segments.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DashBaseUrl& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetServiceLocation() const { return m_serviceLocation; }
    inline bool ServiceLocationHasBeenSet() const { return m_serviceLocationHasBeenSet; }
    template<typename ServiceLocationT = Aws::String>
    void SetServiceLocation(ServiceLocationT&& value) { m_serviceLocationHasBeenSet = true; m_serviceLocation = std::forward<ServiceLocationT>(value); }
    template<typename ServiceLocationT = Aws::String>
    DashBaseUrl& WithServiceLocation(ServiceLocationT&& value) { SetServiceLocation(std::forward<ServiceLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For use with DVB-DASH profiles only. The priority of this location for
     * servings segments. The lower the number, the higher the priority.</p>
     */
    inline int GetDvbPriority() const { return m_dvbPriority; }
    inline bool DvbPriorityHasBeenSet() const { return m_dvbPriorityHasBeenSet; }
    inline void SetDvbPriority(int value) { m_dvbPriorityHasBeenSet = true; m_dvbPriority = value; }
    inline DashBaseUrl& WithDvbPriority(int value) { SetDvbPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For use with DVB-DASH profiles only. The weighting for source locations that
     * have the same priority. </p>
     */
    inline int GetDvbWeight() const { return m_dvbWeight; }
    inline bool DvbWeightHasBeenSet() const { return m_dvbWeightHasBeenSet; }
    inline void SetDvbWeight(int value) { m_dvbWeightHasBeenSet = true; m_dvbWeight = value; }
    inline DashBaseUrl& WithDvbWeight(int value) { SetDvbWeight(value); return *this;}
    ///@}
  private:

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_serviceLocation;
    bool m_serviceLocationHasBeenSet = false;

    int m_dvbPriority{0};
    bool m_dvbPriorityHasBeenSet = false;

    int m_dvbWeight{0};
    bool m_dvbWeightHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
