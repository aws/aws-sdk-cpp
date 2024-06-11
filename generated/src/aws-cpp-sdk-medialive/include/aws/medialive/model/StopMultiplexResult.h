/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/MultiplexSettings.h>
#include <aws/medialive/model/MultiplexState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/MultiplexOutputDestination.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for StopMultiplexResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopMultiplexResponse">AWS
   * API Reference</a></p>
   */
  class StopMultiplexResult
  {
  public:
    AWS_MEDIALIVE_API StopMultiplexResult();
    AWS_MEDIALIVE_API StopMultiplexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API StopMultiplexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The unique arn of the multiplex.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StopMultiplexResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StopMultiplexResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StopMultiplexResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of availability zones for the multiplex.
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZones = std::move(value); }
    inline StopMultiplexResult& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline StopMultiplexResult& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline StopMultiplexResult& AddAvailabilityZones(const Aws::String& value) { m_availabilityZones.push_back(value); return *this; }
    inline StopMultiplexResult& AddAvailabilityZones(Aws::String&& value) { m_availabilityZones.push_back(std::move(value)); return *this; }
    inline StopMultiplexResult& AddAvailabilityZones(const char* value) { m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * A list of the multiplex output destinations.
     */
    inline const Aws::Vector<MultiplexOutputDestination>& GetDestinations() const{ return m_destinations; }
    inline void SetDestinations(const Aws::Vector<MultiplexOutputDestination>& value) { m_destinations = value; }
    inline void SetDestinations(Aws::Vector<MultiplexOutputDestination>&& value) { m_destinations = std::move(value); }
    inline StopMultiplexResult& WithDestinations(const Aws::Vector<MultiplexOutputDestination>& value) { SetDestinations(value); return *this;}
    inline StopMultiplexResult& WithDestinations(Aws::Vector<MultiplexOutputDestination>&& value) { SetDestinations(std::move(value)); return *this;}
    inline StopMultiplexResult& AddDestinations(const MultiplexOutputDestination& value) { m_destinations.push_back(value); return *this; }
    inline StopMultiplexResult& AddDestinations(MultiplexOutputDestination&& value) { m_destinations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The unique id of the multiplex.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline StopMultiplexResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline StopMultiplexResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline StopMultiplexResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * Configuration for a multiplex event.
     */
    inline const MultiplexSettings& GetMultiplexSettings() const{ return m_multiplexSettings; }
    inline void SetMultiplexSettings(const MultiplexSettings& value) { m_multiplexSettings = value; }
    inline void SetMultiplexSettings(MultiplexSettings&& value) { m_multiplexSettings = std::move(value); }
    inline StopMultiplexResult& WithMultiplexSettings(const MultiplexSettings& value) { SetMultiplexSettings(value); return *this;}
    inline StopMultiplexResult& WithMultiplexSettings(MultiplexSettings&& value) { SetMultiplexSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the multiplex.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline StopMultiplexResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StopMultiplexResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StopMultiplexResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of currently healthy pipelines.
     */
    inline int GetPipelinesRunningCount() const{ return m_pipelinesRunningCount; }
    inline void SetPipelinesRunningCount(int value) { m_pipelinesRunningCount = value; }
    inline StopMultiplexResult& WithPipelinesRunningCount(int value) { SetPipelinesRunningCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The number of programs in the multiplex.
     */
    inline int GetProgramCount() const{ return m_programCount; }
    inline void SetProgramCount(int value) { m_programCount = value; }
    inline StopMultiplexResult& WithProgramCount(int value) { SetProgramCount(value); return *this;}
    ///@}

    ///@{
    /**
     * The current state of the multiplex.
     */
    inline const MultiplexState& GetState() const{ return m_state; }
    inline void SetState(const MultiplexState& value) { m_state = value; }
    inline void SetState(MultiplexState&& value) { m_state = std::move(value); }
    inline StopMultiplexResult& WithState(const MultiplexState& value) { SetState(value); return *this;}
    inline StopMultiplexResult& WithState(MultiplexState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of key-value pairs.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline StopMultiplexResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StopMultiplexResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StopMultiplexResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline StopMultiplexResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StopMultiplexResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StopMultiplexResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StopMultiplexResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StopMultiplexResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StopMultiplexResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StopMultiplexResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StopMultiplexResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StopMultiplexResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_availabilityZones;

    Aws::Vector<MultiplexOutputDestination> m_destinations;

    Aws::String m_id;

    MultiplexSettings m_multiplexSettings;

    Aws::String m_name;

    int m_pipelinesRunningCount;

    int m_programCount;

    MultiplexState m_state;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
