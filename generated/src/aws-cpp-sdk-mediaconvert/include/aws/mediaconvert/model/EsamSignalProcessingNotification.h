/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * ESAM SignalProcessingNotification data defined by
   * OC-SP-ESAM-API-I03-131025.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EsamSignalProcessingNotification">AWS
   * API Reference</a></p>
   */
  class EsamSignalProcessingNotification
  {
  public:
    AWS_MEDIACONVERT_API EsamSignalProcessingNotification() = default;
    AWS_MEDIACONVERT_API EsamSignalProcessingNotification(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EsamSignalProcessingNotification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Provide your ESAM SignalProcessingNotification XML document inside your JSON job
     * settings. Form the XML document as per OC-SP-ESAM-API-I03-131025. The transcoder
     * will use the signal processing instructions in the message that you supply. For
     * your MPEG2-TS file outputs, if you want the service to place SCTE-35 markers at
     * the insertion points you specify in the XML document, you must also enable
     * SCTE-35 ESAM. Note that you can either specify an ESAM XML document or enable
     * SCTE-35 passthrough. You can't do both.
     */
    inline const Aws::String& GetSccXml() const { return m_sccXml; }
    inline bool SccXmlHasBeenSet() const { return m_sccXmlHasBeenSet; }
    template<typename SccXmlT = Aws::String>
    void SetSccXml(SccXmlT&& value) { m_sccXmlHasBeenSet = true; m_sccXml = std::forward<SccXmlT>(value); }
    template<typename SccXmlT = Aws::String>
    EsamSignalProcessingNotification& WithSccXml(SccXmlT&& value) { SetSccXml(std::forward<SccXmlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sccXml;
    bool m_sccXmlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
