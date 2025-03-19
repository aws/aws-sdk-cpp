/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncoderProfile.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> A collection of parameters that determine how MediaConnect will convert the
   * content. These fields only apply to outputs on flows that have a CDI
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/EncodingParametersRequest">AWS
   * API Reference</a></p>
   */
  class EncodingParametersRequest
  {
  public:
    AWS_MEDIACONNECT_API EncodingParametersRequest() = default;
    AWS_MEDIACONNECT_API EncodingParametersRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API EncodingParametersRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A value that is used to calculate compression for an output. The bitrate of
     * the output is calculated as follows: Output bitrate = (1 / compressionFactor) *
     * (source bitrate) This property only applies to outputs that use the ST 2110 JPEG
     * XS protocol, with a flow source that uses the CDI protocol. Valid values are
     * floating point numbers in the range of 3.0 to 10.0, inclusive.</p>
     */
    inline double GetCompressionFactor() const { return m_compressionFactor; }
    inline bool CompressionFactorHasBeenSet() const { return m_compressionFactorHasBeenSet; }
    inline void SetCompressionFactor(double value) { m_compressionFactorHasBeenSet = true; m_compressionFactor = value; }
    inline EncodingParametersRequest& WithCompressionFactor(double value) { SetCompressionFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A setting on the encoder that drives compression settings. This property
     * only applies to video media streams associated with outputs that use the ST 2110
     * JPEG XS protocol, if at least one source on the flow uses the CDI protocol.</p>
     */
    inline EncoderProfile GetEncoderProfile() const { return m_encoderProfile; }
    inline bool EncoderProfileHasBeenSet() const { return m_encoderProfileHasBeenSet; }
    inline void SetEncoderProfile(EncoderProfile value) { m_encoderProfileHasBeenSet = true; m_encoderProfile = value; }
    inline EncodingParametersRequest& WithEncoderProfile(EncoderProfile value) { SetEncoderProfile(value); return *this;}
    ///@}
  private:

    double m_compressionFactor{0.0};
    bool m_compressionFactorHasBeenSet = false;

    EncoderProfile m_encoderProfile{EncoderProfile::NOT_SET};
    bool m_encoderProfileHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
