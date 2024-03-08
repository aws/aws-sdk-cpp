/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> A parameter that a security control accepts. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/SecurityControlParameter">AWS
   * API Reference</a></p>
   */
  class SecurityControlParameter
  {
  public:
    AWS_SECURITYHUB_API SecurityControlParameter();
    AWS_SECURITYHUB_API SecurityControlParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API SecurityControlParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of a </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of a </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of a </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of a </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of a </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of a </p>
     */
    inline SecurityControlParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of a </p>
     */
    inline SecurityControlParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of a </p>
     */
    inline SecurityControlParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The current value of a control parameter. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValue() const{ return m_value; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline void SetValue(const Aws::Vector<Aws::String>& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline void SetValue(Aws::Vector<Aws::String>&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline SecurityControlParameter& WithValue(const Aws::Vector<Aws::String>& value) { SetValue(value); return *this;}

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline SecurityControlParameter& WithValue(Aws::Vector<Aws::String>&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline SecurityControlParameter& AddValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline SecurityControlParameter& AddValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value.push_back(std::move(value)); return *this; }

    /**
     * <p> The current value of a control parameter. </p>
     */
    inline SecurityControlParameter& AddValue(const char* value) { m_valueHasBeenSet = true; m_value.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
