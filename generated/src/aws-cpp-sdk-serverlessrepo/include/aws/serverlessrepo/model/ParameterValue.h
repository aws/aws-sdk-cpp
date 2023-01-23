/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Parameter value of the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterValue">AWS
   * API Reference</a></p>
   */
  class ParameterValue
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterValue();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The key associated with the parameter. If you don't specify a key and value
     * for a particular parameter, AWS CloudFormation
 uses the default value that is
     * specified in your template.</p>
     */
    inline ParameterValue& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline ParameterValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline ParameterValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The input value associated with the parameter.</p>
     */
    inline ParameterValue& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
