/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/osis/model/ValidationMessage.h>
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
namespace OSIS
{
namespace Model
{
  class ValidatePipelineResult
  {
  public:
    AWS_OSIS_API ValidatePipelineResult();
    AWS_OSIS_API ValidatePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API ValidatePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A boolean indicating whether or not the pipeline configuration is valid.</p>
     */
    inline bool GetIsValid() const{ return m_isValid; }

    /**
     * <p>A boolean indicating whether or not the pipeline configuration is valid.</p>
     */
    inline void SetIsValid(bool value) { m_isValid = value; }

    /**
     * <p>A boolean indicating whether or not the pipeline configuration is valid.</p>
     */
    inline ValidatePipelineResult& WithIsValid(bool value) { SetIsValid(value); return *this;}


    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline const Aws::Vector<ValidationMessage>& GetErrors() const{ return m_errors; }

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline void SetErrors(const Aws::Vector<ValidationMessage>& value) { m_errors = value; }

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline void SetErrors(Aws::Vector<ValidationMessage>&& value) { m_errors = std::move(value); }

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline ValidatePipelineResult& WithErrors(const Aws::Vector<ValidationMessage>& value) { SetErrors(value); return *this;}

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline ValidatePipelineResult& WithErrors(Aws::Vector<ValidationMessage>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline ValidatePipelineResult& AddErrors(const ValidationMessage& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>A list of errors if the configuration is invalid.</p>
     */
    inline ValidatePipelineResult& AddErrors(ValidationMessage&& value) { m_errors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ValidatePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ValidatePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ValidatePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    bool m_isValid;

    Aws::Vector<ValidationMessage> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
