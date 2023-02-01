/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Placeholder documentation for DeleteInputResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DeleteInputResponse">AWS
   * API Reference</a></p>
   */
  class DeleteInputResult
  {
  public:
    AWS_MEDIALIVE_API DeleteInputResult();
    AWS_MEDIALIVE_API DeleteInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DeleteInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
