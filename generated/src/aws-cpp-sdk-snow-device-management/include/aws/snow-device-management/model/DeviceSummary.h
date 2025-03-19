/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>Identifying information about the device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/DeviceSummary">AWS
   * API Reference</a></p>
   */
  class DeviceSummary
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary() = default;
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the job used to order the device.</p>
     */
    inline const Aws::String& GetAssociatedWithJob() const { return m_associatedWithJob; }
    inline bool AssociatedWithJobHasBeenSet() const { return m_associatedWithJobHasBeenSet; }
    template<typename AssociatedWithJobT = Aws::String>
    void SetAssociatedWithJob(AssociatedWithJobT&& value) { m_associatedWithJobHasBeenSet = true; m_associatedWithJob = std::forward<AssociatedWithJobT>(value); }
    template<typename AssociatedWithJobT = Aws::String>
    DeviceSummary& WithAssociatedWithJob(AssociatedWithJobT&& value) { SetAssociatedWithJob(std::forward<AssociatedWithJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceArn() const { return m_managedDeviceArn; }
    inline bool ManagedDeviceArnHasBeenSet() const { return m_managedDeviceArnHasBeenSet; }
    template<typename ManagedDeviceArnT = Aws::String>
    void SetManagedDeviceArn(ManagedDeviceArnT&& value) { m_managedDeviceArnHasBeenSet = true; m_managedDeviceArn = std::forward<ManagedDeviceArnT>(value); }
    template<typename ManagedDeviceArnT = Aws::String>
    DeviceSummary& WithManagedDeviceArn(ManagedDeviceArnT&& value) { SetManagedDeviceArn(std::forward<ManagedDeviceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const { return m_managedDeviceId; }
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }
    template<typename ManagedDeviceIdT = Aws::String>
    void SetManagedDeviceId(ManagedDeviceIdT&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::forward<ManagedDeviceIdT>(value); }
    template<typename ManagedDeviceIdT = Aws::String>
    DeviceSummary& WithManagedDeviceId(ManagedDeviceIdT&& value) { SetManagedDeviceId(std::forward<ManagedDeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DeviceSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DeviceSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_associatedWithJob;
    bool m_associatedWithJobHasBeenSet = false;

    Aws::String m_managedDeviceArn;
    bool m_managedDeviceArnHasBeenSet = false;

    Aws::String m_managedDeviceId;
    bool m_managedDeviceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
