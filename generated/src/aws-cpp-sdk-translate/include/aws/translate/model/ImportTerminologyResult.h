﻿/**
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
  class ImportTerminologyResult
  {
  public:
    AWS_TRANSLATE_API ImportTerminologyResult();
    AWS_TRANSLATE_API ImportTerminologyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API ImportTerminologyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The properties of the custom terminology being imported.</p>
     */
    inline const TerminologyProperties& GetTerminologyProperties() const{ return m_terminologyProperties; }
    inline void SetTerminologyProperties(const TerminologyProperties& value) { m_terminologyProperties = value; }
    inline void SetTerminologyProperties(TerminologyProperties&& value) { m_terminologyProperties = std::move(value); }
    inline ImportTerminologyResult& WithTerminologyProperties(const TerminologyProperties& value) { SetTerminologyProperties(value); return *this;}
    inline ImportTerminologyResult& WithTerminologyProperties(TerminologyProperties&& value) { SetTerminologyProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location of a file that provides any errors or warnings that
     * were produced by your input file. This file was created when Amazon Translate
     * attempted to create a terminology resource. The location is returned as a
     * presigned URL to that has a 30 minute expiration.</p>
     */
    inline const TerminologyDataLocation& GetAuxiliaryDataLocation() const{ return m_auxiliaryDataLocation; }
    inline void SetAuxiliaryDataLocation(const TerminologyDataLocation& value) { m_auxiliaryDataLocation = value; }
    inline void SetAuxiliaryDataLocation(TerminologyDataLocation&& value) { m_auxiliaryDataLocation = std::move(value); }
    inline ImportTerminologyResult& WithAuxiliaryDataLocation(const TerminologyDataLocation& value) { SetAuxiliaryDataLocation(value); return *this;}
    inline ImportTerminologyResult& WithAuxiliaryDataLocation(TerminologyDataLocation&& value) { SetAuxiliaryDataLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ImportTerminologyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ImportTerminologyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ImportTerminologyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    TerminologyProperties m_terminologyProperties;

    TerminologyDataLocation m_auxiliaryDataLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
