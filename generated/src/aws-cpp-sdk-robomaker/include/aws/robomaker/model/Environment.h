/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>The object that contains the Docker image URI for either your robot or
   * simulation applications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Environment">AWS
   * API Reference</a></p>
   */
  class Environment
  {
  public:
    AWS_ROBOMAKER_API Environment();
    AWS_ROBOMAKER_API Environment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Environment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline Environment& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline Environment& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The Docker image URI for either your robot or simulation applications.</p>
     */
    inline Environment& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
