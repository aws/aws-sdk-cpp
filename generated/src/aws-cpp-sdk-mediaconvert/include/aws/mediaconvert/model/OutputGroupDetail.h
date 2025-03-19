/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/OutputDetail.h>
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
   * Contains details about the output groups specified in the job
   * settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/OutputGroupDetail">AWS
   * API Reference</a></p>
   */
  class OutputGroupDetail
  {
  public:
    AWS_MEDIACONVERT_API OutputGroupDetail() = default;
    AWS_MEDIACONVERT_API OutputGroupDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API OutputGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Details about the output
     */
    inline const Aws::Vector<OutputDetail>& GetOutputDetails() const { return m_outputDetails; }
    inline bool OutputDetailsHasBeenSet() const { return m_outputDetailsHasBeenSet; }
    template<typename OutputDetailsT = Aws::Vector<OutputDetail>>
    void SetOutputDetails(OutputDetailsT&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::forward<OutputDetailsT>(value); }
    template<typename OutputDetailsT = Aws::Vector<OutputDetail>>
    OutputGroupDetail& WithOutputDetails(OutputDetailsT&& value) { SetOutputDetails(std::forward<OutputDetailsT>(value)); return *this;}
    template<typename OutputDetailsT = OutputDetail>
    OutputGroupDetail& AddOutputDetails(OutputDetailsT&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails.emplace_back(std::forward<OutputDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<OutputDetail> m_outputDetails;
    bool m_outputDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
