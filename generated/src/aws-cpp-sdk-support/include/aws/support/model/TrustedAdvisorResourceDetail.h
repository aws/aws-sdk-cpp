/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>Contains information about a resource identified by a Trusted Advisor
   * check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorResourceDetail">AWS
   * API Reference</a></p>
   */
  class TrustedAdvisorResourceDetail
  {
  public:
    AWS_SUPPORT_API TrustedAdvisorResourceDetail() = default;
    AWS_SUPPORT_API TrustedAdvisorResourceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API TrustedAdvisorResourceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPORT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the resource identified in the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    TrustedAdvisorResourceDetail& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region in which the identified resource is
     * located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    TrustedAdvisorResourceDetail& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the identified resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    TrustedAdvisorResourceDetail& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the Amazon Web Services resource was ignored by Trusted
     * Advisor because it was marked as suppressed by the user.</p>
     */
    inline bool GetIsSuppressed() const { return m_isSuppressed; }
    inline bool IsSuppressedHasBeenSet() const { return m_isSuppressedHasBeenSet; }
    inline void SetIsSuppressed(bool value) { m_isSuppressedHasBeenSet = true; m_isSuppressed = value; }
    inline TrustedAdvisorResourceDetail& WithIsSuppressed(bool value) { SetIsSuppressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the identified resource. The exact metadata and
     * its order can be obtained by inspecting the
     * <a>TrustedAdvisorCheckDescription</a> object returned by the call to
     * <a>DescribeTrustedAdvisorChecks</a>. <b>Metadata</b> contains all the data that
     * is shown in the Excel download, even in those cases where the UI shows just
     * summary data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadata() const { return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    template<typename MetadataT = Aws::Vector<Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Vector<Aws::String>>
    TrustedAdvisorResourceDetail& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataT = Aws::String>
    TrustedAdvisorResourceDetail& AddMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata.emplace_back(std::forward<MetadataT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    bool m_isSuppressed{false};
    bool m_isSuppressedHasBeenSet = false;

    Aws::Vector<Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
