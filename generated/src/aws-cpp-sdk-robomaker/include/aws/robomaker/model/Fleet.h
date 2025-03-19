/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/DeploymentStatus.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Fleet">AWS API
   * Reference</a></p>
   */
  class Fleet
  {
  public:
    AWS_ROBOMAKER_API Fleet() = default;
    AWS_ROBOMAKER_API Fleet(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Fleet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Fleet& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Fleet& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in milliseconds since the epoch, when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Fleet& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last fleet deployment.</p>
     */
    inline DeploymentStatus GetLastDeploymentStatus() const { return m_lastDeploymentStatus; }
    inline bool LastDeploymentStatusHasBeenSet() const { return m_lastDeploymentStatusHasBeenSet; }
    inline void SetLastDeploymentStatus(DeploymentStatus value) { m_lastDeploymentStatusHasBeenSet = true; m_lastDeploymentStatus = value; }
    inline Fleet& WithLastDeploymentStatus(DeploymentStatus value) { SetLastDeploymentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const { return m_lastDeploymentJob; }
    inline bool LastDeploymentJobHasBeenSet() const { return m_lastDeploymentJobHasBeenSet; }
    template<typename LastDeploymentJobT = Aws::String>
    void SetLastDeploymentJob(LastDeploymentJobT&& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = std::forward<LastDeploymentJobT>(value); }
    template<typename LastDeploymentJobT = Aws::String>
    Fleet& WithLastDeploymentJob(LastDeploymentJobT&& value) { SetLastDeploymentJob(std::forward<LastDeploymentJobT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const { return m_lastDeploymentTime; }
    inline bool LastDeploymentTimeHasBeenSet() const { return m_lastDeploymentTimeHasBeenSet; }
    template<typename LastDeploymentTimeT = Aws::Utils::DateTime>
    void SetLastDeploymentTime(LastDeploymentTimeT&& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = std::forward<LastDeploymentTimeT>(value); }
    template<typename LastDeploymentTimeT = Aws::Utils::DateTime>
    Fleet& WithLastDeploymentTime(LastDeploymentTimeT&& value) { SetLastDeploymentTime(std::forward<LastDeploymentTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_lastDeploymentStatus{DeploymentStatus::NOT_SET};
    bool m_lastDeploymentStatusHasBeenSet = false;

    Aws::String m_lastDeploymentJob;
    bool m_lastDeploymentJobHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentTime{};
    bool m_lastDeploymentTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
