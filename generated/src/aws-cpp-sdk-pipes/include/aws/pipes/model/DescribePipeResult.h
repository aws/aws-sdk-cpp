/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pipes/model/PipeState.h>
#include <aws/pipes/model/RequestedPipeStateDescribeResponse.h>
#include <aws/pipes/model/PipeEnrichmentParameters.h>
#include <aws/pipes/model/PipeSourceParameters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pipes/model/PipeTargetParameters.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Pipes
{
namespace Model
{
  class DescribePipeResult
  {
  public:
    AWS_PIPES_API DescribePipeResult();
    AWS_PIPES_API DescribePipeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PIPES_API DescribePipeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the pipe.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline DescribePipeResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline DescribePipeResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the pipe.</p>
     */
    inline DescribePipeResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the pipe was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time the pipe was created.</p>
     */
    inline DescribePipeResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the pipe was created.</p>
     */
    inline DescribePipeResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The state the pipe is in.</p>
     */
    inline const PipeState& GetCurrentState() const{ return m_currentState; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(const PipeState& value) { m_currentState = value; }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline void SetCurrentState(PipeState&& value) { m_currentState = std::move(value); }

    /**
     * <p>The state the pipe is in.</p>
     */
    inline DescribePipeResult& WithCurrentState(const PipeState& value) { SetCurrentState(value); return *this;}

    /**
     * <p>The state the pipe is in.</p>
     */
    inline DescribePipeResult& WithCurrentState(PipeState&& value) { SetCurrentState(std::move(value)); return *this;}


    /**
     * <p>A description of the pipe.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the pipe.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the pipe.</p>
     */
    inline DescribePipeResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the pipe.</p>
     */
    inline DescribePipeResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the pipe.</p>
     */
    inline DescribePipeResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The state the pipe should be in.</p>
     */
    inline const RequestedPipeStateDescribeResponse& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(const RequestedPipeStateDescribeResponse& value) { m_desiredState = value; }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline void SetDesiredState(RequestedPipeStateDescribeResponse&& value) { m_desiredState = std::move(value); }

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline DescribePipeResult& WithDesiredState(const RequestedPipeStateDescribeResponse& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The state the pipe should be in.</p>
     */
    inline DescribePipeResult& WithDesiredState(RequestedPipeStateDescribeResponse&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline const Aws::String& GetEnrichment() const{ return m_enrichment; }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(const Aws::String& value) { m_enrichment = value; }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(Aws::String&& value) { m_enrichment = std::move(value); }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline void SetEnrichment(const char* value) { m_enrichment.assign(value); }

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline DescribePipeResult& WithEnrichment(const Aws::String& value) { SetEnrichment(value); return *this;}

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline DescribePipeResult& WithEnrichment(Aws::String&& value) { SetEnrichment(std::move(value)); return *this;}

    /**
     * <p>The ARN of the enrichment resource.</p>
     */
    inline DescribePipeResult& WithEnrichment(const char* value) { SetEnrichment(value); return *this;}


    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline const PipeEnrichmentParameters& GetEnrichmentParameters() const{ return m_enrichmentParameters; }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline void SetEnrichmentParameters(const PipeEnrichmentParameters& value) { m_enrichmentParameters = value; }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline void SetEnrichmentParameters(PipeEnrichmentParameters&& value) { m_enrichmentParameters = std::move(value); }

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline DescribePipeResult& WithEnrichmentParameters(const PipeEnrichmentParameters& value) { SetEnrichmentParameters(value); return *this;}

    /**
     * <p>The parameters required to set up enrichment on your pipe.</p>
     */
    inline DescribePipeResult& WithEnrichmentParameters(PipeEnrichmentParameters&& value) { SetEnrichmentParameters(std::move(value)); return *this;}


    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline DescribePipeResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the pipe was last updated, in <a
     * href="https://www.w3.org/TR/NOTE-datetime">ISO-8601 format</a>
     * (YYYY-MM-DDThh:mm:ss.sTZD).</p>
     */
    inline DescribePipeResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The name of the pipe.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the pipe.</p>
     */
    inline DescribePipeResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline DescribePipeResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipe.</p>
     */
    inline DescribePipeResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline DescribePipeResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline DescribePipeResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that allows the pipe to send data to the target.</p>
     */
    inline DescribePipeResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN of the source resource.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline void SetSource(const Aws::String& value) { m_source = value; }

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline void SetSource(Aws::String&& value) { m_source = std::move(value); }

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline void SetSource(const char* value) { m_source.assign(value); }

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline DescribePipeResult& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline DescribePipeResult& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The ARN of the source resource.</p>
     */
    inline DescribePipeResult& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline const PipeSourceParameters& GetSourceParameters() const{ return m_sourceParameters; }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline void SetSourceParameters(const PipeSourceParameters& value) { m_sourceParameters = value; }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline void SetSourceParameters(PipeSourceParameters&& value) { m_sourceParameters = std::move(value); }

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline DescribePipeResult& WithSourceParameters(const PipeSourceParameters& value) { SetSourceParameters(value); return *this;}

    /**
     * <p>The parameters required to set up a source for your pipe.</p>
     */
    inline DescribePipeResult& WithSourceParameters(PipeSourceParameters&& value) { SetSourceParameters(std::move(value)); return *this;}


    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline void SetStateReason(const Aws::String& value) { m_stateReason = value; }

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline void SetStateReason(Aws::String&& value) { m_stateReason = std::move(value); }

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline void SetStateReason(const char* value) { m_stateReason.assign(value); }

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline DescribePipeResult& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline DescribePipeResult& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}

    /**
     * <p>The reason the pipe is in its current state.</p>
     */
    inline DescribePipeResult& WithStateReason(const char* value) { SetStateReason(value); return *this;}


    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the pipe.</p>
     */
    inline DescribePipeResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The ARN of the target resource.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_target = value; }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline void SetTarget(const char* value) { m_target.assign(value); }

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline DescribePipeResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline DescribePipeResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The ARN of the target resource.</p>
     */
    inline DescribePipeResult& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline const PipeTargetParameters& GetTargetParameters() const{ return m_targetParameters; }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline void SetTargetParameters(const PipeTargetParameters& value) { m_targetParameters = value; }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline void SetTargetParameters(PipeTargetParameters&& value) { m_targetParameters = std::move(value); }

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline DescribePipeResult& WithTargetParameters(const PipeTargetParameters& value) { SetTargetParameters(value); return *this;}

    /**
     * <p>The parameters required to set up a target for your pipe.</p>
     */
    inline DescribePipeResult& WithTargetParameters(PipeTargetParameters&& value) { SetTargetParameters(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    PipeState m_currentState;

    Aws::String m_description;

    RequestedPipeStateDescribeResponse m_desiredState;

    Aws::String m_enrichment;

    PipeEnrichmentParameters m_enrichmentParameters;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_name;

    Aws::String m_roleArn;

    Aws::String m_source;

    PipeSourceParameters m_sourceParameters;

    Aws::String m_stateReason;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_target;

    PipeTargetParameters m_targetParameters;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
