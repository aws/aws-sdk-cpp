/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/model/TerminologyProperties.h>
#include <aws/translate/model/TerminologyDataLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Translate
{
namespace Model
{
  class GetTerminologyResult
  {
  public:
    AWS_TRANSLATE_API GetTerminologyResult() = default;
    AWS_TRANSLATE_API GetTerminologyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API GetTerminologyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the custom terminology being retrieved.</p>
     */
    inline const TerminologyProperties& GetTerminologyProperties() const { return m_terminologyProperties; }
    template<typename TerminologyPropertiesT = TerminologyProperties>
    void SetTerminologyProperties(TerminologyPropertiesT&& value) { m_terminologyPropertiesHasBeenSet = true; m_terminologyProperties = std::forward<TerminologyPropertiesT>(value); }
    template<typename TerminologyPropertiesT = TerminologyProperties>
    GetTerminologyResult& WithTerminologyProperties(TerminologyPropertiesT&& value) { SetTerminologyProperties(std::forward<TerminologyPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of the most recent custom terminology input file that
     * was successfully imported into Amazon Translate. The location is returned as a
     * presigned URL that has a 30-minute expiration.</p>  <p>Amazon
     * Translate doesn't scan all input files for the risk of CSV injection attacks.
     * </p> <p>CSV injection occurs when a .csv or .tsv file is altered so that a
     * record contains malicious code. The record begins with a special character, such
     * as =, +, -, or @. When the file is opened in a spreadsheet program, the program
     * might interpret the record as a formula and run the code within it.</p>
     * <p>Before you download an input file from Amazon S3, ensure that you recognize
     * the file and trust its creator.</p> 
     */
    inline const TerminologyDataLocation& GetTerminologyDataLocation() const { return m_terminologyDataLocation; }
    template<typename TerminologyDataLocationT = TerminologyDataLocation>
    void SetTerminologyDataLocation(TerminologyDataLocationT&& value) { m_terminologyDataLocationHasBeenSet = true; m_terminologyDataLocation = std::forward<TerminologyDataLocationT>(value); }
    template<typename TerminologyDataLocationT = TerminologyDataLocation>
    GetTerminologyResult& WithTerminologyDataLocation(TerminologyDataLocationT&& value) { SetTerminologyDataLocation(std::forward<TerminologyDataLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30-minute expiration.</p>
     */
    inline const TerminologyDataLocation& GetAuxiliaryDataLocation() const { return m_auxiliaryDataLocation; }
    template<typename AuxiliaryDataLocationT = TerminologyDataLocation>
    void SetAuxiliaryDataLocation(AuxiliaryDataLocationT&& value) { m_auxiliaryDataLocationHasBeenSet = true; m_auxiliaryDataLocation = std::forward<AuxiliaryDataLocationT>(value); }
    template<typename AuxiliaryDataLocationT = TerminologyDataLocation>
    GetTerminologyResult& WithAuxiliaryDataLocation(AuxiliaryDataLocationT&& value) { SetAuxiliaryDataLocation(std::forward<AuxiliaryDataLocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTerminologyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TerminologyProperties m_terminologyProperties;
    bool m_terminologyPropertiesHasBeenSet = false;

    TerminologyDataLocation m_terminologyDataLocation;
    bool m_terminologyDataLocationHasBeenSet = false;

    TerminologyDataLocation m_auxiliaryDataLocation;
    bool m_auxiliaryDataLocationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
