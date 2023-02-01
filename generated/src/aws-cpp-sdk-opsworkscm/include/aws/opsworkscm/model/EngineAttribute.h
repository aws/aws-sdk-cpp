/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
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
namespace OpsWorksCM
{
namespace Model
{

  /**
   * <p>A name and value pair that is specific to the engine of the server.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworkscm-2016-11-01/EngineAttribute">AWS
   * API Reference</a></p>
   */
  class EngineAttribute
  {
  public:
    AWS_OPSWORKSCM_API EngineAttribute();
    AWS_OPSWORKSCM_API EngineAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API EngineAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKSCM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the engine attribute. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline EngineAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline EngineAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the engine attribute. </p>
     */
    inline EngineAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the engine attribute. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline EngineAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline EngineAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value of the engine attribute. </p>
     */
    inline EngineAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
