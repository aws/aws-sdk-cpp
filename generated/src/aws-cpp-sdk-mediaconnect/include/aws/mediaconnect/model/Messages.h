/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Messages that provide the state of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Messages">AWS
   * API Reference</a></p>
   */
  class Messages
  {
  public:
    AWS_MEDIACONNECT_API Messages() = default;
    AWS_MEDIACONNECT_API Messages(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Messages& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of errors that might have been generated from processes on this flow.
     */
    inline const Aws::Vector<Aws::String>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<Aws::String>>
    Messages& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = Aws::String>
    Messages& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_errors;
    bool m_errorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
