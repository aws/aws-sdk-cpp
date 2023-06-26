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
    AWS_ROBOMAKER_API Tool();
    AWS_ROBOMAKER_API Tool(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Tool& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * tool. If <code>True</code>, AWS RoboMaker will configure a connection so you can
     * interact with the tool as it is running in the simulation. It must have a
     * graphical user interface. The default is <code>False</code>. </p>
     */
    inline bool GetStreamUI() const{ return m_streamUI; }

    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * tool. If <code>True</code>, AWS RoboMaker will configure a connection so you can
     * interact with the tool as it is running in the simulation. It must have a
     * graphical user interface. The default is <code>False</code>. </p>
     */
    inline bool StreamUIHasBeenSet() const { return m_streamUIHasBeenSet; }

    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * tool. If <code>True</code>, AWS RoboMaker will configure a connection so you can
     * interact with the tool as it is running in the simulation. It must have a
     * graphical user interface. The default is <code>False</code>. </p>
     */
    inline void SetStreamUI(bool value) { m_streamUIHasBeenSet = true; m_streamUI = value; }

    /**
     * <p>Boolean indicating whether a streaming session will be configured for the
     * tool. If <code>True</code>, AWS RoboMaker will configure a connection so you can
     * interact with the tool as it is running in the simulation. It must have a
     * graphical user interface. The default is <code>False</code>. </p>
     */
    inline Tool& WithStreamUI(bool value) { SetStreamUI(value); return *this;}


    /**
     * <p>The name of the tool.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the tool.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the tool.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the tool.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the tool.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the tool.</p>
     */
    inline Tool& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the tool.</p>
     */
    inline Tool& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the tool.</p>
     */
    inline Tool& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline Tool& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline Tool& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>Command-line arguments for the tool. It must include the tool executable
     * name.</p>
     */
    inline Tool& WithCommand(const char* value) { SetCommand(value); return *this;}


    /**
     * <p>Boolean indicating whether logs will be recorded in CloudWatch for the tool.
     * The default is <code>False</code>. </p>
     */
    inline bool GetStreamOutputToCloudWatch() const{ return m_streamOutputToCloudWatch; }

    /**
     * <p>Boolean indicating whether logs will be recorded in CloudWatch for the tool.
     * The default is <code>False</code>. </p>
     */
    inline bool StreamOutputToCloudWatchHasBeenSet() const { return m_streamOutputToCloudWatchHasBeenSet; }

    /**
     * <p>Boolean indicating whether logs will be recorded in CloudWatch for the tool.
     * The default is <code>False</code>. </p>
     */
    inline void SetStreamOutputToCloudWatch(bool value) { m_streamOutputToCloudWatchHasBeenSet = true; m_streamOutputToCloudWatch = value; }

    /**
     * <p>Boolean indicating whether logs will be recorded in CloudWatch for the tool.
     * The default is <code>False</code>. </p>
     */
    inline Tool& WithStreamOutputToCloudWatch(bool value) { SetStreamOutputToCloudWatch(value); return *this;}


    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline const ExitBehavior& GetExitBehavior() const{ return m_exitBehavior; }

    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline bool ExitBehaviorHasBeenSet() const { return m_exitBehaviorHasBeenSet; }

    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline void SetExitBehavior(const ExitBehavior& value) { m_exitBehaviorHasBeenSet = true; m_exitBehavior = value; }

    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline void SetExitBehavior(ExitBehavior&& value) { m_exitBehaviorHasBeenSet = true; m_exitBehavior = std::move(value); }

    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline Tool& WithExitBehavior(const ExitBehavior& value) { SetExitBehavior(value); return *this;}

    /**
     * <p>Exit behavior determines what happens when your tool quits running.
     * <code>RESTART</code> will cause your tool to be restarted. <code>FAIL</code>
     * will cause your job to exit. The default is <code>RESTART</code>. </p>
     */
    inline Tool& WithExitBehavior(ExitBehavior&& value) { SetExitBehavior(std::move(value)); return *this;}

  private:

    bool m_streamUI;
    bool m_streamUIHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    bool m_streamOutputToCloudWatch;
    bool m_streamOutputToCloudWatchHasBeenSet = false;

    ExitBehavior m_exitBehavior;
    bool m_exitBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
