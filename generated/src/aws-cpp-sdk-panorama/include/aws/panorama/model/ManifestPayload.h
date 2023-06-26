/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A application verion's manifest file. This is a JSON document that has a
   * single key (<code>PayloadData</code>) where the value is an escaped string
   * representation of the application manifest (<code>graph.json</code>). This file
   * is located in the <code>graphs</code> folder in your application
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ManifestPayload">AWS
   * API Reference</a></p>
   */
  class ManifestPayload
  {
  public:
    AWS_PANORAMA_API ManifestPayload();
    AWS_PANORAMA_API ManifestPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ManifestPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application manifest.</p>
     */
    inline const Aws::String& GetPayloadData() const{ return m_payloadData; }

    /**
     * <p>The application manifest.</p>
     */
    inline bool PayloadDataHasBeenSet() const { return m_payloadDataHasBeenSet; }

    /**
     * <p>The application manifest.</p>
     */
    inline void SetPayloadData(const Aws::String& value) { m_payloadDataHasBeenSet = true; m_payloadData = value; }

    /**
     * <p>The application manifest.</p>
     */
    inline void SetPayloadData(Aws::String&& value) { m_payloadDataHasBeenSet = true; m_payloadData = std::move(value); }

    /**
     * <p>The application manifest.</p>
     */
    inline void SetPayloadData(const char* value) { m_payloadDataHasBeenSet = true; m_payloadData.assign(value); }

    /**
     * <p>The application manifest.</p>
     */
    inline ManifestPayload& WithPayloadData(const Aws::String& value) { SetPayloadData(value); return *this;}

    /**
     * <p>The application manifest.</p>
     */
    inline ManifestPayload& WithPayloadData(Aws::String&& value) { SetPayloadData(std::move(value)); return *this;}

    /**
     * <p>The application manifest.</p>
     */
    inline ManifestPayload& WithPayloadData(const char* value) { SetPayloadData(value); return *this;}

  private:

    Aws::String m_payloadData;
    bool m_payloadDataHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
