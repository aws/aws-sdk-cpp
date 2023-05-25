/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/simspaceweaver/model/SimulationStatus.h>
#include <aws/simspaceweaver/model/SimulationTargetStatus.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>A collection of data about the simulation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/SimulationMetadata">AWS
   * API Reference</a></p>
   */
  class SimulationMetadata
  {
  public:
    AWS_SIMSPACEWEAVER_API SimulationMetadata();
    AWS_SIMSPACEWEAVER_API SimulationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SimulationMetadata& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SimulationMetadata& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation. For more information about
     * ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SimulationMetadata& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline SimulationMetadata& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the simulation was created, expressed as the number of seconds
     * and milliseconds in UTC since the Unix epoch (0:0:0.000, January 1, 1970).</p>
     */
    inline SimulationMetadata& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the simulation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the simulation.</p>
     */
    inline SimulationMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline SimulationMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation.</p>
     */
    inline SimulationMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the simulation.</p>
     */
    inline const SimulationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the simulation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the simulation.</p>
     */
    inline void SetStatus(const SimulationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the simulation.</p>
     */
    inline void SetStatus(SimulationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the simulation.</p>
     */
    inline SimulationMetadata& WithStatus(const SimulationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the simulation.</p>
     */
    inline SimulationMetadata& WithStatus(SimulationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The desired status of the simulation.</p>
     */
    inline const SimulationTargetStatus& GetTargetStatus() const{ return m_targetStatus; }

    /**
     * <p>The desired status of the simulation.</p>
     */
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }

    /**
     * <p>The desired status of the simulation.</p>
     */
    inline void SetTargetStatus(const SimulationTargetStatus& value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }

    /**
     * <p>The desired status of the simulation.</p>
     */
    inline void SetTargetStatus(SimulationTargetStatus&& value) { m_targetStatusHasBeenSet = true; m_targetStatus = std::move(value); }

    /**
     * <p>The desired status of the simulation.</p>
     */
    inline SimulationMetadata& WithTargetStatus(const SimulationTargetStatus& value) { SetTargetStatus(value); return *this;}

    /**
     * <p>The desired status of the simulation.</p>
     */
    inline SimulationMetadata& WithTargetStatus(SimulationTargetStatus&& value) { SetTargetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    SimulationStatus m_status;
    bool m_statusHasBeenSet = false;

    SimulationTargetStatus m_targetStatus;
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
