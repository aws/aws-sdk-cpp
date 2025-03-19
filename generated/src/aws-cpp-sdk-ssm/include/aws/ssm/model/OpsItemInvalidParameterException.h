/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A specified parameter argument isn't valid. Verify the available arguments
   * and try again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/OpsItemInvalidParameterException">AWS
   * API Reference</a></p>
   */
  class OpsItemInvalidParameterException
  {
  public:
    AWS_SSM_API OpsItemInvalidParameterException() = default;
    AWS_SSM_API OpsItemInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetParameterNames() const { return m_parameterNames; }
    inline bool ParameterNamesHasBeenSet() const { return m_parameterNamesHasBeenSet; }
    template<typename ParameterNamesT = Aws::Vector<Aws::String>>
    void SetParameterNames(ParameterNamesT&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = std::forward<ParameterNamesT>(value); }
    template<typename ParameterNamesT = Aws::Vector<Aws::String>>
    OpsItemInvalidParameterException& WithParameterNames(ParameterNamesT&& value) { SetParameterNames(std::forward<ParameterNamesT>(value)); return *this;}
    template<typename ParameterNamesT = Aws::String>
    OpsItemInvalidParameterException& AddParameterNames(ParameterNamesT&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.emplace_back(std::forward<ParameterNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    OpsItemInvalidParameterException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_parameterNames;
    bool m_parameterNamesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
