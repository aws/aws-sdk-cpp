/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Details about what caused the incident to be created in Incident
   * Manager.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/TriggerDetails">AWS
   * API Reference</a></p>
   */
  class TriggerDetails
  {
  public:
    AWS_SSMINCIDENTS_API TriggerDetails();
    AWS_SSMINCIDENTS_API TriggerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API TriggerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Raw data passed from either Amazon EventBridge, Amazon CloudWatch, or
     * Incident Manager when an incident is created.</p>
     */
    inline const Aws::String& GetRawData() const{ return m_rawData; }
    inline bool RawDataHasBeenSet() const { return m_rawDataHasBeenSet; }
    inline void SetRawData(const Aws::String& value) { m_rawDataHasBeenSet = true; m_rawData = value; }
    inline void SetRawData(Aws::String&& value) { m_rawDataHasBeenSet = true; m_rawData = std::move(value); }
    inline void SetRawData(const char* value) { m_rawDataHasBeenSet = true; m_rawData.assign(value); }
    inline TriggerDetails& WithRawData(const Aws::String& value) { SetRawData(value); return *this;}
    inline TriggerDetails& WithRawData(Aws::String&& value) { SetRawData(std::move(value)); return *this;}
    inline TriggerDetails& WithRawData(const char* value) { SetRawData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the service that sourced the event. All events sourced from within
     * Amazon Web Services begin with "<code>aws.</code>" Customer-generated events can
     * have any value here, as long as it doesn't begin with "<code>aws.</code>" We
     * recommend the use of Java package-name style reverse domain-name strings. </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline TriggerDetails& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline TriggerDetails& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline TriggerDetails& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was detected.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline TriggerDetails& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline TriggerDetails& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source that detected the incident.</p>
     */
    inline const Aws::String& GetTriggerArn() const{ return m_triggerArn; }
    inline bool TriggerArnHasBeenSet() const { return m_triggerArnHasBeenSet; }
    inline void SetTriggerArn(const Aws::String& value) { m_triggerArnHasBeenSet = true; m_triggerArn = value; }
    inline void SetTriggerArn(Aws::String&& value) { m_triggerArnHasBeenSet = true; m_triggerArn = std::move(value); }
    inline void SetTriggerArn(const char* value) { m_triggerArnHasBeenSet = true; m_triggerArn.assign(value); }
    inline TriggerDetails& WithTriggerArn(const Aws::String& value) { SetTriggerArn(value); return *this;}
    inline TriggerDetails& WithTriggerArn(Aws::String&& value) { SetTriggerArn(std::move(value)); return *this;}
    inline TriggerDetails& WithTriggerArn(const char* value) { SetTriggerArn(value); return *this;}
    ///@}
  private:

    Aws::String m_rawData;
    bool m_rawDataHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_triggerArn;
    bool m_triggerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
