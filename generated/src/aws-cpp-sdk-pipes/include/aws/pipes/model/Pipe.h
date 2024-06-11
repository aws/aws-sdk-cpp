/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/RequestedPipeState.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>An object that represents a pipe. Amazon EventBridgePipes connect event
   * sources to targets and reduces the need for specialized knowledge and
   * integration code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/Pipe">AWS API
   * Reference</a></p>
   */
  class Pipe
  {
  public:
    AWS_PIPES_API Pipe();
    AWS_PIPES_API Pipe(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Pipe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Pipe& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Pipe& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Pipe& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the pipe.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Pipe& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Pipe& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Pipe& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeState& GetDesiredState() const{ return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(const RequestedPipeState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline void SetDesiredState(RequestedPipeState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }
    inline Pipe& WithDesiredState(const RequestedPipeState& value) { SetDesiredState(value); return *this;}
    inline Pipe& WithDesiredState(RequestedPipeState&& value) { SetDesiredState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state the pipe is in.</p>
     */
    inline const PipeState& GetCurrentState() const{ return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    inline void SetCurrentState(const PipeState& value) { m_currentStateHasBeenSet = true; m_currentState = value; }
    inline void SetCurrentState(PipeState&& value) { m_currentStateHasBeenSet = true; m_currentState = std::move(value); }
    inline Pipe& WithCurrentState(const PipeState& value) { SetCurrentState(value); return *this;}
    inline Pipe& WithCurrentState(PipeState&& value) { SetCurrentState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline Pipe& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline Pipe& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline Pipe& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the pipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Pipe& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Pipe& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Pipe& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Pipe& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the source resource.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Pipe& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Pipe& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Pipe& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline Pipe& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline Pipe& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline Pipe& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const{ return m_enrichment; }
    inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
    inline void SetEnrichment(const Aws::String& value) { m_enrichmentHasBeenSet = true; m_enrichment = value; }
    inline void SetEnrichment(Aws::String&& value) { m_enrichmentHasBeenSet = true; m_enrichment = std::move(value); }
    inline void SetEnrichment(const char* value) { m_enrichmentHasBeenSet = true; m_enrichment.assign(value); }
    inline Pipe& WithEnrichment(const Aws::String& value) { SetEnrichment(value); return *this;}
    inline Pipe& WithEnrichment(Aws::String&& value) { SetEnrichment(std::move(value)); return *this;}
    inline Pipe& WithEnrichment(const char* value) { SetEnrichment(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    RequestedPipeState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    PipeState m_currentState;
    bool m_currentStateHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_enrichment;
    bool m_enrichmentHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
