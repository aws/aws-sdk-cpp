/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/RtmpOutputCertificateMode.h>
#include <aws/medialive/model/OutputLocationRef.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Rtmp Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RtmpOutputSettings">AWS
   * API Reference</a></p>
   */
  class RtmpOutputSettings
  {
  public:
    AWS_MEDIALIVE_API RtmpOutputSettings() = default;
    AWS_MEDIALIVE_API RtmpOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RtmpOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If set to verifyAuthenticity, verify the tls certificate chain to a trusted
     * Certificate Authority (CA).  This will cause rtmps outputs with self-signed
     * certificates to fail.
     */
    inline RtmpOutputCertificateMode GetCertificateMode() const { return m_certificateMode; }
    inline bool CertificateModeHasBeenSet() const { return m_certificateModeHasBeenSet; }
    inline void SetCertificateMode(RtmpOutputCertificateMode value) { m_certificateModeHasBeenSet = true; m_certificateMode = value; }
    inline RtmpOutputSettings& WithCertificateMode(RtmpOutputCertificateMode value) { SetCertificateMode(value); return *this;}
    ///@}

    ///@{
    /**
     * Number of seconds to wait before retrying a connection to the Flash Media server
     * if the connection is lost.
     */
    inline int GetConnectionRetryInterval() const { return m_connectionRetryInterval; }
    inline bool ConnectionRetryIntervalHasBeenSet() const { return m_connectionRetryIntervalHasBeenSet; }
    inline void SetConnectionRetryInterval(int value) { m_connectionRetryIntervalHasBeenSet = true; m_connectionRetryInterval = value; }
    inline RtmpOutputSettings& WithConnectionRetryInterval(int value) { SetConnectionRetryInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * The RTMP endpoint excluding the stream name (eg. rtmp://host/appname). For
     * connection to Akamai, a username and password must be supplied. URI fields
     * accept format identifiers.
     */
    inline const OutputLocationRef& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = OutputLocationRef>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = OutputLocationRef>
    RtmpOutputSettings& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Number of retry attempts.
     */
    inline int GetNumRetries() const { return m_numRetries; }
    inline bool NumRetriesHasBeenSet() const { return m_numRetriesHasBeenSet; }
    inline void SetNumRetries(int value) { m_numRetriesHasBeenSet = true; m_numRetries = value; }
    inline RtmpOutputSettings& WithNumRetries(int value) { SetNumRetries(value); return *this;}
    ///@}
  private:

    RtmpOutputCertificateMode m_certificateMode{RtmpOutputCertificateMode::NOT_SET};
    bool m_certificateModeHasBeenSet = false;

    int m_connectionRetryInterval{0};
    bool m_connectionRetryIntervalHasBeenSet = false;

    OutputLocationRef m_destination;
    bool m_destinationHasBeenSet = false;

    int m_numRetries{0};
    bool m_numRetriesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
