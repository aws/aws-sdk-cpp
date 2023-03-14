/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Input.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateInputResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateInputResponse">AWS
   * API Reference</a></p>
   */
  class CreateInputResult
  {
  public:
    AWS_MEDIALIVE_API CreateInputResult();
    AWS_MEDIALIVE_API CreateInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Input& GetInput() const{ return m_input; }

    
    inline void SetInput(const Input& value) { m_input = value; }

    
    inline void SetInput(Input&& value) { m_input = std::move(value); }

    
    inline CreateInputResult& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline CreateInputResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateInputResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateInputResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateInputResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Input m_input;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
