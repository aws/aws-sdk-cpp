/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
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
namespace MQ
{
namespace Model
{

  /**
   * <p>Id of the engine version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/EngineVersion">AWS
   * API Reference</a></p>
   */
  class EngineVersion
  {
  public:
    AWS_MQ_API EngineVersion();
    AWS_MQ_API EngineVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API EngineVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Id for the version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Id for the version.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Id for the version.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Id for the version.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Id for the version.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Id for the version.</p>
     */
    inline EngineVersion& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Id for the version.</p>
     */
    inline EngineVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Id for the version.</p>
     */
    inline EngineVersion& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
