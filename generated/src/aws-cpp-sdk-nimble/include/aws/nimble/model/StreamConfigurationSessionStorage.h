/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamingSessionStorageRoot.h>
#include <aws/nimble/model/StreamingSessionStorageMode.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>The configuration for a streaming session’s upload storage.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StreamConfigurationSessionStorage">AWS
   * API Reference</a></p>
   */
  class StreamConfigurationSessionStorage
  {
  public:
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionStorage();
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API StreamConfigurationSessionStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline const Aws::Vector<StreamingSessionStorageMode>& GetMode() const{ return m_mode; }

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline void SetMode(const Aws::Vector<StreamingSessionStorageMode>& value) { m_modeHasBeenSet = true; m_mode = value; }

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline void SetMode(Aws::Vector<StreamingSessionStorageMode>&& value) { m_modeHasBeenSet = true; m_mode = std::move(value); }

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline StreamConfigurationSessionStorage& WithMode(const Aws::Vector<StreamingSessionStorageMode>& value) { SetMode(value); return *this;}

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline StreamConfigurationSessionStorage& WithMode(Aws::Vector<StreamingSessionStorageMode>&& value) { SetMode(std::move(value)); return *this;}

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline StreamConfigurationSessionStorage& AddMode(const StreamingSessionStorageMode& value) { m_modeHasBeenSet = true; m_mode.push_back(value); return *this; }

    /**
     * <p>Allows artists to upload files to their workstations. The only valid option
     * is <code>UPLOAD</code>.</p>
     */
    inline StreamConfigurationSessionStorage& AddMode(StreamingSessionStorageMode&& value) { m_modeHasBeenSet = true; m_mode.push_back(std::move(value)); return *this; }


    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline const StreamingSessionStorageRoot& GetRoot() const{ return m_root; }

    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline bool RootHasBeenSet() const { return m_rootHasBeenSet; }

    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline void SetRoot(const StreamingSessionStorageRoot& value) { m_rootHasBeenSet = true; m_root = value; }

    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline void SetRoot(StreamingSessionStorageRoot&& value) { m_rootHasBeenSet = true; m_root = std::move(value); }

    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline StreamConfigurationSessionStorage& WithRoot(const StreamingSessionStorageRoot& value) { SetRoot(value); return *this;}

    /**
     * <p>The configuration for the upload storage root of the streaming session.</p>
     */
    inline StreamConfigurationSessionStorage& WithRoot(StreamingSessionStorageRoot&& value) { SetRoot(std::move(value)); return *this;}

  private:

    Aws::Vector<StreamingSessionStorageMode> m_mode;
    bool m_modeHasBeenSet = false;

    StreamingSessionStorageRoot m_root;
    bool m_rootHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
