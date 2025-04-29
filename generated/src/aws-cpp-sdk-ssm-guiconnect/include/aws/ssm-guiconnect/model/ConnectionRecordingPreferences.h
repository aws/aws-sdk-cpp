/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-guiconnect/model/RecordingDestinations.h>
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
namespace SSMGuiConnect
{
namespace Model
{

  /**
   * <p>The set of preferences used for recording RDP connections in the requesting
   * Amazon Web Services account and Amazon Web Services Region. This includes
   * details such as which S3 bucket recordings are stored in.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-guiconnect-2021-05-01/ConnectionRecordingPreferences">AWS
   * API Reference</a></p>
   */
  class ConnectionRecordingPreferences
  {
  public:
    AWS_SSMGUICONNECT_API ConnectionRecordingPreferences() = default;
    AWS_SSMGUICONNECT_API ConnectionRecordingPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMGUICONNECT_API ConnectionRecordingPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMGUICONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of a KMS key that is used to encrypt data while it is being processed
     * by the service. This key must exist in the same Amazon Web Services Region as
     * the node you start an RDP connection to.</p>
     */
    inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
    inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
    template<typename KMSKeyArnT = Aws::String>
    void SetKMSKeyArn(KMSKeyArnT&& value) { m_kMSKeyArnHasBeenSet = true; m_kMSKeyArn = std::forward<KMSKeyArnT>(value); }
    template<typename KMSKeyArnT = Aws::String>
    ConnectionRecordingPreferences& WithKMSKeyArn(KMSKeyArnT&& value) { SetKMSKeyArn(std::forward<KMSKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines where recordings of RDP connections are stored.</p>
     */
    inline const RecordingDestinations& GetRecordingDestinations() const { return m_recordingDestinations; }
    inline bool RecordingDestinationsHasBeenSet() const { return m_recordingDestinationsHasBeenSet; }
    template<typename RecordingDestinationsT = RecordingDestinations>
    void SetRecordingDestinations(RecordingDestinationsT&& value) { m_recordingDestinationsHasBeenSet = true; m_recordingDestinations = std::forward<RecordingDestinationsT>(value); }
    template<typename RecordingDestinationsT = RecordingDestinations>
    ConnectionRecordingPreferences& WithRecordingDestinations(RecordingDestinationsT&& value) { SetRecordingDestinations(std::forward<RecordingDestinationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kMSKeyArn;
    bool m_kMSKeyArnHasBeenSet = false;

    RecordingDestinations m_recordingDestinations;
    bool m_recordingDestinationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMGuiConnect
} // namespace Aws
