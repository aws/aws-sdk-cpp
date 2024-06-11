/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/InstancesCount.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Summarizes the number of layers, instances, and apps in a
   * stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StackSummary">AWS
   * API Reference</a></p>
   */
  class StackSummary
  {
  public:
    AWS_OPSWORKS_API StackSummary();
    AWS_OPSWORKS_API StackSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API StackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline StackSummary& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline StackSummary& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline StackSummary& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StackSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StackSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StackSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline StackSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StackSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StackSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of layers.</p>
     */
    inline int GetLayersCount() const{ return m_layersCount; }
    inline bool LayersCountHasBeenSet() const { return m_layersCountHasBeenSet; }
    inline void SetLayersCount(int value) { m_layersCountHasBeenSet = true; m_layersCount = value; }
    inline StackSummary& WithLayersCount(int value) { SetLayersCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of apps.</p>
     */
    inline int GetAppsCount() const{ return m_appsCount; }
    inline bool AppsCountHasBeenSet() const { return m_appsCountHasBeenSet; }
    inline void SetAppsCount(int value) { m_appsCountHasBeenSet = true; m_appsCount = value; }
    inline StackSummary& WithAppsCount(int value) { SetAppsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline const InstancesCount& GetInstancesCount() const{ return m_instancesCount; }
    inline bool InstancesCountHasBeenSet() const { return m_instancesCountHasBeenSet; }
    inline void SetInstancesCount(const InstancesCount& value) { m_instancesCountHasBeenSet = true; m_instancesCount = value; }
    inline void SetInstancesCount(InstancesCount&& value) { m_instancesCountHasBeenSet = true; m_instancesCount = std::move(value); }
    inline StackSummary& WithInstancesCount(const InstancesCount& value) { SetInstancesCount(value); return *this;}
    inline StackSummary& WithInstancesCount(InstancesCount&& value) { SetInstancesCount(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_layersCount;
    bool m_layersCountHasBeenSet = false;

    int m_appsCount;
    bool m_appsCountHasBeenSet = false;

    InstancesCount m_instancesCount;
    bool m_instancesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
