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
    AWS_SSM_API OpsItemInvalidParameterException();
    AWS_SSM_API OpsItemInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API OpsItemInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Aws::String>& GetParameterNames() const{ return m_parameterNames; }
    inline bool ParameterNamesHasBeenSet() const { return m_parameterNamesHasBeenSet; }
    inline void SetParameterNames(const Aws::Vector<Aws::String>& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = value; }
    inline void SetParameterNames(Aws::Vector<Aws::String>&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames = std::move(value); }
    inline OpsItemInvalidParameterException& WithParameterNames(const Aws::Vector<Aws::String>& value) { SetParameterNames(value); return *this;}
    inline OpsItemInvalidParameterException& WithParameterNames(Aws::Vector<Aws::String>&& value) { SetParameterNames(std::move(value)); return *this;}
    inline OpsItemInvalidParameterException& AddParameterNames(const Aws::String& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(value); return *this; }
    inline OpsItemInvalidParameterException& AddParameterNames(Aws::String&& value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(std::move(value)); return *this; }
    inline OpsItemInvalidParameterException& AddParameterNames(const char* value) { m_parameterNamesHasBeenSet = true; m_parameterNames.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline OpsItemInvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline OpsItemInvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline OpsItemInvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}
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
