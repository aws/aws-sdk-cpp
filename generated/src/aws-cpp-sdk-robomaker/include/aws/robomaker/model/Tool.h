/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/ExitBehavior.h>
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
   * <p>Information about a tool. Tools are used in a simulation job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Tool">AWS API
   * Reference</a></p>
   */
  class Tool
  {
  public:
    AWS_ROBOMAKER_API Tool() = default;
    AWS_ROBOMAKER_API Tool(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Tool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * tool. If <code>True</code>, AWS RoboMaker will configure a connection so you can
     * interact with the tool as it is running in the simulation. It must have a
     * graphical user interface. The default is <code>False</code>. </p>
     */
    inline bool GetStreamUI() const { return m_streamUI; }
    inline bool StreamUIHasBeenSet() const { return m_streamUIHasBeenSet; }
    inline void SetStreamUI(bool value) { m_streamUIHasBeenSet = true; m_streamUI = value; }
    inline Tool& WithStreamUI(bool value) { SetStreamUI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the tool.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Tool& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    Tool& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean indicating whether logs will be recorded in CloudWatch for the tool.
     * The default is <code>False</code>. </p>
     */
    inline bool GetStreamOutputToCloudWatch() const { return m_streamOutputToCloudWatch; }
    inline bool StreamOutputToCloudWatchHasBeenSet() const { return m_streamOutputToCloudWatchHasBeenSet; }
    inline void SetStreamOutputToCloudWatch(bool value) { m_streamOutputToCloudWatchHasBeenSet = true; m_streamOutputToCloudWatch = value; }
    inline Tool& WithStreamOutputToCloudWatch(bool value) { SetStreamOutputToCloudWatch(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline ExitBehavior GetExitBehavior() const { return m_exitBehavior; }
    inline bool ExitBehaviorHasBeenSet() const { return m_exitBehaviorHasBeenSet; }
    inline void SetExitBehavior(ExitBehavior value) { m_exitBehaviorHasBeenSet = true; m_exitBehavior = value; }
    inline Tool& WithExitBehavior(ExitBehavior value) { SetExitBehavior(value); return *this;}
    ///@}
  private:

    bool m_streamUI{false};
    bool m_streamUIHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    bool m_streamOutputToCloudWatch{false};
    bool m_streamOutputToCloudWatchHasBeenSet = false;

    ExitBehavior m_exitBehavior{ExitBehavior::NOT_SET};
    bool m_exitBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
