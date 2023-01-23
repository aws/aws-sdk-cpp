/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The environment variables to send to the container. You can add new
   * environment variables, which are added to the container at launch, or you can
   * override the existing environment variables from the Docker image or the task
   * definition.</p>  <p>Environment variables cannot start with
   * "<code>Batch</code>". This naming convention is reserved for variables that
   * Batch sets.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/BatchEnvironmentVariable">AWS
   * API Reference</a></p>
   */
  class BatchEnvironmentVariable
  {
  public:
    AWS_PIPES_API BatchEnvironmentVariable();
    AWS_PIPES_API BatchEnvironmentVariable(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API BatchEnvironmentVariable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the key-value pair. For environment variables, this is the name
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the key-value pair. For environment variables, this is the value
     * of the environment variable.</p>
     */
    inline BatchEnvironmentVariable& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
