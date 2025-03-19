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
    AWS_OPSWORKS_API StackSummary() = default;
    AWS_OPSWORKS_API StackSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API StackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackSummary& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StackSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stack's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StackSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of layers.</p>
     */
    inline int GetLayersCount() const { return m_layersCount; }
    inline bool LayersCountHasBeenSet() const { return m_layersCountHasBeenSet; }
    inline void SetLayersCount(int value) { m_layersCountHasBeenSet = true; m_layersCount = value; }
    inline StackSummary& WithLayersCount(int value) { SetLayersCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of apps.</p>
     */
    inline int GetAppsCount() const { return m_appsCount; }
    inline bool AppsCountHasBeenSet() const { return m_appsCountHasBeenSet; }
    inline void SetAppsCount(int value) { m_appsCountHasBeenSet = true; m_appsCount = value; }
    inline StackSummary& WithAppsCount(int value) { SetAppsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>InstancesCount</code> object with the number of instances in each
     * status.</p>
     */
    inline const InstancesCount& GetInstancesCount() const { return m_instancesCount; }
    inline bool InstancesCountHasBeenSet() const { return m_instancesCountHasBeenSet; }
    template<typename InstancesCountT = InstancesCount>
    void SetInstancesCount(InstancesCountT&& value) { m_instancesCountHasBeenSet = true; m_instancesCount = std::forward<InstancesCountT>(value); }
    template<typename InstancesCountT = InstancesCount>
    StackSummary& WithInstancesCount(InstancesCountT&& value) { SetInstancesCount(std::forward<InstancesCountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_layersCount{0};
    bool m_layersCountHasBeenSet = false;

    int m_appsCount{0};
    bool m_appsCountHasBeenSet = false;

    InstancesCount m_instancesCount;
    bool m_instancesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
