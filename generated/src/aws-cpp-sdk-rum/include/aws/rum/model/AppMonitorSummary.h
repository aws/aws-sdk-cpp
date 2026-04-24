/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/AppMonitorPlatform.h>
#include <aws/rum/model/StateEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchRUM {
namespace Model {

/**
 * <p>A structure that includes some data about app monitors and their
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/AppMonitorSummary">AWS
 * API Reference</a></p>
 */
class AppMonitorSummary {
 public:
  AWS_CLOUDWATCHRUM_API AppMonitorSummary() = default;
  AWS_CLOUDWATCHRUM_API AppMonitorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHRUM_API AppMonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of this app monitor.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AppMonitorSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique ID of this app monitor.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AppMonitorSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the app monitor was created.</p>
   */
  inline const Aws::String& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::String>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::String>
  AppMonitorSummary& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time of the most recent changes to this app monitor's
   * configuration.</p>
   */
  inline const Aws::String& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::String>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::String>
  AppMonitorSummary& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of this app monitor.</p>
   */
  inline StateEnum GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(StateEnum value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline AppMonitorSummary& WithState(StateEnum value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The platform type for this app monitor. Valid values are <code>Web</code> for
   * web applications, <code>Android</code> for Android applications, and
   * <code>iOS</code> for IOS applications.</p>
   */
  inline AppMonitorPlatform GetPlatform() const { return m_platform; }
  inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
  inline void SetPlatform(AppMonitorPlatform value) {
    m_platformHasBeenSet = true;
    m_platform = value;
  }
  inline AppMonitorSummary& WithPlatform(AppMonitorPlatform value) {
    SetPlatform(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_id;

  Aws::String m_created;

  Aws::String m_lastModified;

  StateEnum m_state{StateEnum::NOT_SET};

  AppMonitorPlatform m_platform{AppMonitorPlatform::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_platformHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchRUM
}  // namespace Aws
