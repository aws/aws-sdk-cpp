/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for ValidationError<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ValidationError">AWS
   * API Reference</a></p>
   */
  class ValidationError
  {
  public:
    AWS_MEDIALIVE_API ValidationError() = default;
    AWS_MEDIALIVE_API ValidationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Path to the source of the error.
     */
    inline const Aws::String& GetElementPath() const { return m_elementPath; }
    inline bool ElementPathHasBeenSet() const { return m_elementPathHasBeenSet; }
    template<typename ElementPathT = Aws::String>
    void SetElementPath(ElementPathT&& value) { m_elementPathHasBeenSet = true; m_elementPath = std::forward<ElementPathT>(value); }
    template<typename ElementPathT = Aws::String>
    ValidationError& WithElementPath(ElementPathT&& value) { SetElementPath(std::forward<ElementPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The error message.
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ValidationError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elementPath;
    bool m_elementPathHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
