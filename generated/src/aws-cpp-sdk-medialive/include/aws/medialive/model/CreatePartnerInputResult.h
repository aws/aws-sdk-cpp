/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Input.h>
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
   * Placeholder documentation for CreatePartnerInputResponse<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreatePartnerInputResponse">AWS
   * API Reference</a></p>
   */
  class CreatePartnerInputResult
  {
  public:
    AWS_MEDIALIVE_API CreatePartnerInputResult();
    AWS_MEDIALIVE_API CreatePartnerInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreatePartnerInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Input& GetInput() const{ return m_input; }

    
    inline void SetInput(const Input& value) { m_input = value; }

    
    inline void SetInput(Input&& value) { m_input = std::move(value); }

    
    inline CreatePartnerInputResult& WithInput(const Input& value) { SetInput(value); return *this;}

    
    inline CreatePartnerInputResult& WithInput(Input&& value) { SetInput(std::move(value)); return *this;}

  private:

    Input m_input;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
