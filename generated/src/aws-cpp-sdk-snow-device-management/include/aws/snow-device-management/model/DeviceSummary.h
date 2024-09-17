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
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary();
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API DeviceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the job used to order the device.</p>
     */
    inline const Aws::String& GetAssociatedWithJob() const{ return m_associatedWithJob; }
    inline bool AssociatedWithJobHasBeenSet() const { return m_associatedWithJobHasBeenSet; }
    inline void SetAssociatedWithJob(const Aws::String& value) { m_associatedWithJobHasBeenSet = true; m_associatedWithJob = value; }
    inline void SetAssociatedWithJob(Aws::String&& value) { m_associatedWithJobHasBeenSet = true; m_associatedWithJob = std::move(value); }
    inline void SetAssociatedWithJob(const char* value) { m_associatedWithJobHasBeenSet = true; m_associatedWithJob.assign(value); }
    inline DeviceSummary& WithAssociatedWithJob(const Aws::String& value) { SetAssociatedWithJob(value); return *this;}
    inline DeviceSummary& WithAssociatedWithJob(Aws::String&& value) { SetAssociatedWithJob(std::move(value)); return *this;}
    inline DeviceSummary& WithAssociatedWithJob(const char* value) { SetAssociatedWithJob(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceArn() const{ return m_managedDeviceArn; }
    inline bool ManagedDeviceArnHasBeenSet() const { return m_managedDeviceArnHasBeenSet; }
    inline void SetManagedDeviceArn(const Aws::String& value) { m_managedDeviceArnHasBeenSet = true; m_managedDeviceArn = value; }
    inline void SetManagedDeviceArn(Aws::String&& value) { m_managedDeviceArnHasBeenSet = true; m_managedDeviceArn = std::move(value); }
    inline void SetManagedDeviceArn(const char* value) { m_managedDeviceArnHasBeenSet = true; m_managedDeviceArn.assign(value); }
    inline DeviceSummary& WithManagedDeviceArn(const Aws::String& value) { SetManagedDeviceArn(value); return *this;}
    inline DeviceSummary& WithManagedDeviceArn(Aws::String&& value) { SetManagedDeviceArn(std::move(value)); return *this;}
    inline DeviceSummary& WithManagedDeviceArn(const char* value) { SetManagedDeviceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetManagedDeviceId() const{ return m_managedDeviceId; }
    inline bool ManagedDeviceIdHasBeenSet() const { return m_managedDeviceIdHasBeenSet; }
    inline void SetManagedDeviceId(const Aws::String& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = value; }
    inline void SetManagedDeviceId(Aws::String&& value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId = std::move(value); }
    inline void SetManagedDeviceId(const char* value) { m_managedDeviceIdHasBeenSet = true; m_managedDeviceId.assign(value); }
    inline DeviceSummary& WithManagedDeviceId(const Aws::String& value) { SetManagedDeviceId(value); return *this;}
    inline DeviceSummary& WithManagedDeviceId(Aws::String&& value) { SetManagedDeviceId(std::move(value)); return *this;}
    inline DeviceSummary& WithManagedDeviceId(const char* value) { SetManagedDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can use tags to
     * categorize a resource in different ways, such as by purpose, owner, or
     * environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DeviceSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DeviceSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DeviceSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline DeviceSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DeviceSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DeviceSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DeviceSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline DeviceSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline DeviceSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
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
