/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The ingest domain URL where the source stream should be sent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/IngestEndpoint">AWS
   * API Reference</a></p>
   */
  class IngestEndpoint
  {
  public:
    AWS_MEDIAPACKAGEV2_API IngestEndpoint();
    AWS_MEDIAPACKAGEV2_API IngestEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API IngestEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline IngestEndpoint& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline IngestEndpoint& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique identifier for the IngestEndpoint.</p>
     */
    inline IngestEndpoint& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline IngestEndpoint& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline IngestEndpoint& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The ingest domain URL where the source stream should be sent.</p>
     */
    inline IngestEndpoint& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
